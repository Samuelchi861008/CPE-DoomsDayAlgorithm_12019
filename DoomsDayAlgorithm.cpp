/* **************************************************************************

    * File Name : DoomsDayAlgorithm.cpp

    * Creation Date : 2018-09-06 15:05:37

    * Last Modified : 2018-09-11 23:09:38

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    string weekDay[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                            "Thursday", "Friday", "Saturday"}; //設定星期
    int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    //設定每月天數，因題目2011為平年，因此2月為28，2011總共是356天
    int inputMonth, inputDay; //輸入的月和日
    int numOfInput; //資料組數
    
    cin >> numOfInput; //輸入資料組數
    for(int i = 0; i < numOfInput; i++)
    {
        cin >> inputMonth >> inputDay; //輸入月和日
        if(inputMonth == 1) //若輸入1月，直接按照日期計算輸出星期
            cout << weekDay[(inputDay + 5) % 7] << endl;
            //輸出星期，因1月1日為星期六，故需加5
        else //若非輸入1月，則需先將前幾月之天數加總後再計算輸出星期
        {
            int totalDay = 0; //總共天數
            for(int j = 0; j < inputMonth - 1; j++)
                totalDay += monthDay[j]; //計算天數
            cout << weekDay[(inputDay + 5 + totalDay) % 7] << endl; 
            //輸出星期，因1月1日為星期六，故需加5
        }
    }
    return 0;
}
