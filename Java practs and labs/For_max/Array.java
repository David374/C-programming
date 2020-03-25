package com.company;
import java.util.Scanner;
public class Array {
    public long[] arr_m;

    void ManualFill() throws NegativeArraySizeException {
        int array_size;
        Scanner in = new Scanner(System.in);
        System.out.print("Введите размер массива: ");
        array_size = in.nextInt();
        if (array_size < 1) {
            throw new NegativeArraySizeException("Введен неверный размер массива!");
        }
        arr_m = new long[array_size];
        for (int i = 0; i < array_size; i++) {
            System.out.print("[" + i + "] = ");
            arr_m[i] = in.nextLong();
        }
        System.out.println("Ввод массива завершён.");

    }

    void randomFill() throws NegativeArraySizeException, IllegalArgumentException {
        int array_size;
        Scanner in = new Scanner(System.in);
        System.out.print("Введите новый размер массива: ");
        array_size = in.nextInt();
        if (array_size < 1)
            throw new NegativeArraySizeException("Введен неверный размер массива!");
        System.out.print("Введите рамки генерируемых чисел(через пробел): ");
        long min, max;
        min = in.nextLong();
        max = in.nextLong();
        if (min > max)
            throw new IllegalArgumentException("Минимальное число не может быть больше максимального!");
        arr_m = new long[array_size];
        max++;
        for (int i = 0; i < array_size; i++) {
            arr_m[i] = (long) (Math.random() * (max - min) + min);
        }
        System.out.println("Массив создан.");
    }

    void ArrOutput() throws IllegalStateException {
        if (arr_m.length == 0)
            throw new IllegalStateException("Массив не проинициализирован!");
        System.out.println("Массив:");
        for (long index : arr_m) {
            System.out.println(index);
        }
    }

    void reverseOutput() throws IllegalStateException {
        if (arr_m.length == 0)
            throw new IllegalStateException("Массив не проинициализирован!");
        System.out.println("Массив справа -> налево:");
        for (int i = arr_m.length - 1; i >= 0; i--) {
            System.out.println(arr_m[i]);
        }
    }

    void BubbleSort(long[] arr_m) {
        int arr_size = arr_m.length;
        long storage = 0;
        for (int i = 0; i < arr_size - 1; i++) {
            for (int t = 0; t < arr_size - i - 1; t++) {
                if (arr_m[t] > arr_m[t + 1]) {
                    storage = arr_m[t];
                    arr_m[t] = arr_m[t + 1];
                    arr_m[t + 1] = storage;
                }
            }
        }
        System.out.println("Массив успешно отсортирован!");
    }

    void digitCounter(long[] arr_m, int a) {
        int s_count = 0;
        for (int i = 0; i < arr_m.length; i++) {
            int count = 0;
            long temp = arr_m[i];
            while(temp != 0){
                ++count;
                temp = temp / 10;
            }
            if(count > a){
                s_count += 1;
            }
        }
        System.out.println("Кол-во элементов = " + s_count);
    }
}
