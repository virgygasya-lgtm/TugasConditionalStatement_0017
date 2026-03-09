#include <iostream>
using namespace std;

void inputData(float & berat, float & tinggi)
{
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

float hitungBMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}

string statusBMI(float bmi){

    if(bmi < 18.5)
    {
        return "Berat Badan Kurang";
    }
    else if(bmi < 25){
        return "Berat Badan Normal";
    }
    else if(bmi < 30){
        return "Berat Badan Kelebihan";
    }
    else{
        return "Obesitas";
    }

}

int main(){

    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    inputData(berat, tinggi);

    bmi = hitungBMI(berat, tinggi);

    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << statusBMI(bmi) << endl;

    return 0;
}