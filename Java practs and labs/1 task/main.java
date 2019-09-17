***********************************
MAIN

package com.company;

import java.util.Scanner;

public class Main {

public static void main(String[] args) {
testDroby();
testOneMassivMera();
}

public static void testDroby(){
try {
Droby D1 = new Droby(1, 2);
Droby D2 = new Droby(3, 4);
System.out.println(D1.outDroby());
System.out.println(D2.outDroby());
D1.addTwoDroby(D2);
System.out.println(D1.outDroby());
D2.addTwoDroby(D1);
System.out.println(D2.outDroby());
} catch (Exception e) {
System.out.println(e.toString());
}
}

public static void testOneMassivMera(){
final int min=10;
final int max=75;
int n;
Scanner in=new Scanner(System.in);
try{
System.out.println("Введите количество элементов массива");
n = in.nextInt();
OneMassivMera array = new OneMassivMera(n);
array.randInput(10,100);
array.consolOutput();
System.out.println("Введите число для поиска");
int b=in.nextInt();
int m = array.findIndexNumber(b);
if (m==-1)
System.out.println("Нет числа"+b+"в массиве");
else
System.out.println("ндекс числа"+b+"="+m);

}catch (Exception e) {
System.out.println(e.toString());
}
}
}
*******************************************************
massiveOneMera
package com.company;
import java.util.Scanner;
public class OneMassivMera {
private int n;
private int x[];

OneMassivMera(int n) throws Exception {
if (n<=0) throw new Exception(new String("Количество элементов <=0"));
this.n=n;
x=new int[this.n];
}

void randInput(int min, int max){
for (int i=0; i<n;i++){
x[i]=(int)(Math.random()*++max+min);
}
}

void randInputInterval(int min,int max){
for (int i=0;i<n;i++){
x[i]=(int)(Math.random()*max+min);
}
}

void consolInput(){
System.out.println("Введите"+n+"чисел");
Scanner in = new Scanner(System.in);
for (int i=0;i<n;i++){
x[i]=in.nextInt();
}
}

void consolOutput(){
System.out.println("Массив чисел");
for (int i=0;i<n;i++){
System.out.print(" "+x[i]);
}
}

int findIndexNumber(int a){
for (int i=0;i<n;i++){
if(x[i]==a)return i;
}
return -1;
}
}
**************************
Droby


package com.company;

public class Droby {
Integer a,b;
public Droby(int a1, int b1)throws Exception {
if (b1==0)
throw new Exception (new String ( "Знаменатель не д.б. равен нулю"));
a = a1; b = b1;
}
public void addTwoDroby(Droby D) {
a = a*D.b+b*D.a;
b = b*D.b;
}
public String outDroby() {
return (a.toString()+"/"+b.toString());
}
}
***************************************
