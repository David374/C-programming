package com.company;

public class Droby {
    Integer a, b;
    public Droby(int a1,int b1)throws Exception{
        if(b1 == 0)
            throw new Exception(new String("Знаменатель не должен быть равен нулю!"));
        a = a1;
        b = b1;
    }
    public void addTwoDroby(Droby D){
        a = a*D.b+b*D.a;
        b = b*D.b;
    }
    public String outDroby(){
        return (a.toString()+"/"+b.toString());
    }
}
