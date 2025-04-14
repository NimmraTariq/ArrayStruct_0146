#include<iostream>

using namespace std;

string nama[] ={"joko", "bejo", "yanto"};

float kecepatan[3] =  { 75.3, 83.7, 99.9};

float waktu [4]; 

int main(){
        cout << " Data ke-2 " << nama[1] << endl;
nama [1]= "gibran";
cout << " Data ke-2 " << nama[1] << endl;

for (int i=0; i<3; i++){
cout<< "kecepatan ke-" << i+1 << ":" << kecepatan[i] << endl;
}
for ( int i= 0; i<4; i++){
    cout << "masukan waktu ke" << i+1 << ":" ;
    cin >> waktu [i];
}
cout << endl;
cout << "Show the time : " << endl;

cout << endl;


for (int i = 0; i<4; i++ ){
    cout << "Waktu ke- " << i+ 1 << " : " << waktu[i] << endl;
}

return 0;

}