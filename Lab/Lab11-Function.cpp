/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass
    
    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            370
    Output:
        Pass.
    
    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/
#include <stdio.h>
int sum(int i){
    //หลัก
    int count = 0 ;
        if(i<10){ 
        count = 1 ;
        }else if(i<100){
        count = 2 ;
        }else if (i<1000){  
        count = 3 ;
        }
    //หลักตัวที่
    int H1 = i / 100 ; // 1 int ตัดตัวเเปรทศนิยมออก เอาเเต่เลขจำนวนเต็ม 1.53 จึงเหลือ 1 
    int H2 = (i - H1 * 100) / 10 ; //153 - 100 = 53/10 =5.3 = 5
    int H3 = (i - (H1 * 100 + H2 * 10)) ; // (i = user input - (H1 = 1 * 100 + H2 = 5 * 10))
    return H1 * H1 *H1 + H2 * H2 * H2 + H3 * H3 * H3 ; //ส่งค่ากลับไปให้ int main
}

    int main(){
    printf( "Enter Number: \n" ) ;
    int number ;
    scanf("%d", &number) ;
    int number2 = sum(number) ;
    if(number2 == number){
        printf( "Pass." ) ;
    }else{
        printf( "Not Pass." ) ;
    }

return 0 ;
}








