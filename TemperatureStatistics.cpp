#include <iostream>
using namespace std;
int main(){
    cout << "Enter the number of weather stations"<<endl;
    int n;
    cin >> n;
    double OverallSum = 0;
    int OverallCount = 0;

    for (int i = 1; i<=n; i++){
        cout << "Enter the number of temperature readings for station "<< i << endl;
        int m;
        cin >> m;
        double StationSum = 0;

        for (int j = 1; j<=m; j++){
            cout << "Enter temperature reading "<< j <<":"<<endl;
            double Temperature;
            cin >> Temperature;
            StationSum += Temperature;
            OverallSum += Temperature;
        }
        double StationMean = StationSum / m;
        cout << "Mean Daily Temperature for station "<< i << " is: "<< StationMean << endl;
        OverallCount += m;
    }
    double OverallMean = OverallSum / OverallCount;
    cout <<"Overall Mean daily temperature is "<< OverallMean <<endl;
    return 0;
    cout << "Thank Youuuu and Byeee!!!"<<endl;

    
}
