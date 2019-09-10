package com.company;


public class Main {

    public static void main(String[] args) {
        try{
	Droby D1 = new Droby(1, 2);
	Droby D2 = new Droby(3, 4);
	System.out.println(D1.outDroby());
	System.out.println(D2.outDroby());
	D1.addTwoDroby(D2);
	System.out.println(D1.outDroby());
	D1.addTwoDroby(D2);

    } catch(Exception e){
            System.out.println(e.toString());
        }
}

