#include <iostream>

using namespace std;

int main()
{
    //stats
    int HP = 100;
    int Mana = 100;
    int Damage = 100;
    int EquipedSword;
    //Items
    int Herbs = 3;
    int Mana_Potion = 3;
    int HP_Potion = 3;
    int Swords[3] = {30,50,99};


    cout << "Selamat Datang di Dunia isekai"<< endl;
    cout << "Silahkan Mendaftar Identias Didunia isekai"<<endl;
    cout << "silahkan Masukan identitas Anda" << endl;
            cout << "HP ... " ; cin >> HP;
            cout << "Mana ... " ; cin >> Mana;
            cout << "Damage ... " ; cin >> Damage;
            cout << "info pedang : \n 1. pedang 1 damage 30 \n 2. Pedang 2 damage 50 \n 3.Pedang 3 damage 99"<<endl;
            cout << "Equiped Sword ... " ; cin >> EquipedSword;
            cout <<endl;
    while(true){
    cout << "pilih dulu om"<<endl;
    cout << "1. Tampilkan Stats dan Item \n2. Gunakan Item diinventory\n";
    int pilihMenu = 0;
    cout <<endl;
    cin >> pilihMenu ;
            if(pilihMenu == 1){
            cout << "ini adalah stat dan item yang Kamu miliki"<<endl;
            cout << "Stats Kamu " << endl ;
            cout << "HP : " << HP <<endl;
            cout << "Mana : " << Mana <<endl;
            cout << "Damage : " << Damage + Swords[EquipedSword-1] <<endl;
            cout << "Equiped Sword : " << EquipedSword <<endl;
            cout << "Item yang kamu miliki " << endl;
            cout << "Herbal : " << Herbs <<endl;
            cout << "Mana Potion : " << Mana_Potion <<endl;
            cout << "HP Potion : " << HP_Potion <<endl;
            if (Swords){
                for(int i=0;i<sizeof(Swords)/sizeof(Swords[0]);i++){
                    cout <<"Sword" << i+1 << "Damage : " << Swords[i]<<endl;
                }
            }
            }
            if(pilihMenu == 2){
                cout << "Gunakan Item apa : " <<endl;
                cout << " 1. Hp Potion : HP +50\n 2. Mana Potion : Mana +50\n 3.Herbs : HP+10 \n 4. Swords";
                int pilihItem;
                cout << "pilih ... " <<endl; cin>>pilihItem;
                    if(pilihItem == 1){
                        cout <<"HP kamu bertambah 50" ;
                        HP = HP+50;
                        if(HP>100)HP =100;

                        HP_Potion = HP_Potion - 1;
                    }if(pilihItem == 2){
                        cout <<"Mana kamu bertambah 50" ;
                        Mana = Mana+50;
                        if(Mana>100)Mana =100;

                        Mana_Potion = Mana_Potion - 1;
                    }if(pilihItem == 3){
                        cout <<"HP kamu bertambah 10" ;
                        HP = HP+10;
                        if(HP>100)HP =100;

                        Herbs = Herbs-1;
                    }if(pilihItem == 4){
                        cout <<"pilih Pedang"<<endl;
                        for(int i=0;i<sizeof(Swords)/sizeof(Swords[0]);i++){
                        cout <<"Sword" << i+1 << "Damage : " << Swords[i]<<endl;
                    }
                    int pilihpedang;
                    cin >> pilihpedang;
                    if(pilihpedang==1){
                        cout <<"kamu memilih pedang ke-1" << endl;
                        cout <<"damage bertambah +" <<Swords[0];
                        EquipedSword = 1;
                        cout <<endl;
                    }
                    if(pilihpedang==2){
                        cout <<"kamu memilih pedang ke-2" << endl;
                        cout <<"damage bertambah +" <<Swords[1];
                        EquipedSword = 2;
                        cout <<endl;

                    }
                    if(pilihpedang==3){
                        cout <<"kamu memilih pedang ke-3" << endl;
                        cout <<"damage bertambah +" <<Swords[2];
                        EquipedSword = 3;
                        cout <<endl;
                    }

                    }
            }
    }

    return 0;
}
