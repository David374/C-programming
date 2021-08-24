package com.company;
import java.util.Scanner;
import java.util.Arrays;
public class Main {

    public static void main(String[] args) {
        MenuOutPut();
        Array myArr = new Array();
        byte status = -1;
        Scanner in = new Scanner(System.in);
        while (status != 0) {
            System.out.print("Введите № команды:");
            status = in.nextByte();
            switch (status) {
                case 1:
                    try {
                        myArr.ManualFill();
                    } catch (Exception e) {
                        System.out.println(e);
                    }
                    break;
                case 2:
                    try{
                        myArr.randomFill();
                    }catch (Exception e) {
                        System.out.println(e);
                    }
                    break;
                case 3:
                    try{
                        myArr.ArrOutput();
                    }catch (Exception e) {
                        System.out.println(e);
                    }
                    break;
                case 4:
                    try{
                        myArr.reverseOutput();
                    }catch (Exception e) {
                        System.out.println(e);
                    }
                    break;
                case 5:
                    myArr.BubbleSort(myArr.arr_m);
                    break;
                case 6:
                    int cdcount;
                    System.out.print("Введите число:");
                    cdcount = in.nextInt();
                    myArr.digitCounter(myArr.arr_m, cdcount);
                    break;
                case 7:
                    Arrays.sort(myArr.arr_m);
                    myArr.ArrOutput();
                    break;
            }
        }
    }
    public static void menuOutPut(){
        System.out.println("0) Выходи из программы");
        System.out.println("1) Ввести массив вручную");
        System.out.println("2) Заполнить массив рандомно");
        System.out.println("3) Вывести массив (слева -> направо)");
        System.out.println("4) Вывести массив (справа -> налево)");
        System.out.println("5) Отсортировать массив методом пузырька (BubbleSort)");
        System.out.println("6) Задать число - digit/ Определить ко-во элементов массива, у которых кол-во цифр меньше заданного");
        System.out.println("7) Отсортировать массив методом класса Arrays и вывести его");
        System.out.println("8) Вывести меню повторно");
    }
}
