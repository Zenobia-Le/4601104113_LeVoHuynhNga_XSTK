#include<bits/stdc++.h>

using namespace std;

void nhap(int x[], int n) {
    for (int i = 1; i <= n; i++) {
        cout << "x" << i << ": ";
        cin >> x[i];
    }
}
void xuat(int x[], int n) {
    for (int i = 1; i <= n; i++)
        cout << "x" << i << ": "<< x[i] << " ";
}

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

int main(){
    int x[100];
    int n;
    int r;
    double summean;
    double sumvaria;
    double mean;
    double varia;
    int a[100];
    cout << "THONG KE SUY DIEN" << endl;
    cout << endl;
    cout << "Nhap cuoc phi cua 59 sinh vien: " << endl;
    nhap(x, 59);
    cout << "_______________________________" << endl;
    cout << "Danh sach cuoc phi hang thang cua 59 sinh vien: " << endl;
    xuat(x, 59);
    cout << endl;
    cout << "Nhap so luong cot: ";
    cin >> n;
    srand((int)time(0));   
    for(int i = 1; i <= n; i++){
        r = random(1,59);
        cout << "x" << r << ":" << x[r] <<"	";
        summean+=x[r];
        sumvaria+=x[r]*x[r];
    } 
    mean = summean/n;
    varia = sqrt((sumvaria-2*summean*mean+n*mean*mean)/(n-1));
	cout << endl;   
    cout << "Mean= ";
    cout << setprecision(6) << fixed << mean << endl;
	cout << "Variance= ";
	cout << setprecision(6) << fixed << varia << endl;
	system("pause");
	return 0;
}


