package com.solutions;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class agc {

    public static int soru2(int n, int k,int start) {
        List<Integer> list = new ArrayList<>();

        for(int i = 1; i<=n; i++){
            list.add(i);
        }


        while(list.size() > 1){
            int ind = (start+k-1)%list.size();
            list.remove(ind);
            start = (ind)%list.size();
        }
        return list.get(0);
    }
    public static void main(String[] args){
        int n,k,start;


        Scanner scan=new Scanner(System.in);

        n= scan.nextInt();
        k= scan.nextInt();
        start=scan.nextInt();

        System.out.println(soru2(n,k,start));
    }
}
