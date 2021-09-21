//operadores

import java.util.Scanner;
import java.lang.Math;

public class bloque2 {
    public static void main() {
        ejercicio1();
    }

    public static void ejercicio1() {
        float I,II,III;
        Scanner entrada = new Scanner(System.in);

        System.out.println("Ingrese las 3 calificaciones: ");
        I=entrada.nextFloat();
        II=entrada.nextFloat();
        III=entrada.nextFloat();

        entrada.close();

        System.out.println("La Suma es: " + (I+II+III));
    }

    public static void ejercicio2() {
        Float salarioF = 0.0f, salarioH =0.0f;
        int horas = 0;

        Scanner entrada = new Scanner(System.in);

        System.out.print("Ingrese su salario por Hora: ");
        salarioH = entrada.nextFloat();
        System.out.print("Ingrese sus horas de la semana trabajadas: ");
        horas = entrada.nextInt();

        entrada.close();

        salarioF = salarioH * horas;

        System.out.println("Salario semanal: " + salarioF);
    }

    public static void ejercicio3() {
        float dG = 0.0f, dL = 0.0f, dJ = 0.0f; 

        Scanner entrada = new Scanner(System.in);

        System.out.print("Ingrese los dolares de Guillermo: ");
        dG = entrada.nextFloat();

        entrada.close();

        dL = dG/2; dJ = (dL+dG)/2;

        System.out.println("El dinero total es: " + (dG + dL + dJ));

    }

    public static void ejercicio4() {
        Scanner entrada = new Scanner(System.in);

        int nCarros=0;
        float comisionCarros = 0.0f;

        System.out.print("Ingrese el numero de autos vendidos: ");
        nCarros = entrada.nextInt();

        for (int i = 1; i <= nCarros; i++) {
            System.out.print("Ingrese el valor del auto " + i + ": ");
            comisionCarros += ( entrada.nextFloat()*0.05 );
        }

        System.out.println("\nSalario final: " + ( 1000 + (nCarros * 150) + comisionCarros ));

        entrada.close();


        /*
        ejemplo: 
        1,000 + (2*150) + ( (5,000*0.05) + (9,000*0.05) ) = 2,000
        */
    }

    public static void ejercicio5() {
        float cal =0.00f;

        /**
         * 100 + 100 + 100 + 100 = 10 + 25 + 25 + 40 = 100%
         * 50  + 100 + 100 + 50  = 5  + 25 + 25 + 20 = 75%
         */

        Scanner entrada = new Scanner(System.in);
        System.out.print("Calificaion de Participacion: ");
        cal += (0.1)*entrada.nextFloat();
        System.out.print("Calificaion de I examen: ");
        cal += entrada.nextFloat()*(0.25);
        System.out.print("Calificaion de II examen: ");
        cal += entrada.nextFloat()*(0.25);
        System.out.print("Calificaion de Examen final: ");
        cal += entrada.nextFloat()*(0.4);
        
        System.out.println("\nCalificacion final: "+cal+"%");

        entrada.close();
    }

    public static void ejercicio6() {
        Scanner entrada = new Scanner(System.in);
        int a,b;
        String cadena ="";

        System.out.print("Ingrese a: ");
        a = entrada.nextInt();
        System.out.print("Ingrese b: ");
        b = entrada.nextInt();

        System.out.println("("+a+"+"+b+")² = " + cadena + a+"² + 2("+ a + ")(" + b + ") + " + b + "²");
        cadena +=  (int)Math.pow(a, 2);
        System.out.println("("+a+"+"+b+")² = " + cadena +" + 2("+ a + ")(" + b + ") + " + b + "²");
        cadena += " + "+ (2*a*b) +" + ";
        System.out.println("("+a+"+"+b+")² = "+ cadena + b + "²");
        cadena += (int)Math.pow(b, 2);
        System.out.println("("+a+"+"+b+")² = " + cadena);
        System.out.println("("+a+"+"+b+")² = "+ ((int)Math.pow(a, 2) + (2*a*b) + (int)Math.pow(b, 2) ));
        entrada.close();
    }

    public static void ejercicio7() {
        Scanner entrada = new Scanner(System.in);
        int horas=0,semana,dias;

        System.out.print("Ingrese las horas: ");
        horas=entrada.nextInt();

        semana=horas/168;
        dias=(horas-(semana*168))/24;

        System.out.println(semana + " Semanas, " + dias + " Dias, " + (horas-(semana*168)-(dias*24)) + " Horas");
        
        entrada.close();
    }

    public static void ejercicio8() {
        Scanner entrada = new Scanner(System.in);
        float a,b,c;

        System.out.print("Ingrese a: ");
        a=entrada.nextFloat();
        System.out.print("Ingrese b: ");
        b=entrada.nextFloat();
        System.out.print("Ingrese c: ");
        c=entrada.nextFloat();

        System.out.println("\nX1 =" + (float)(((-1*b)+Math.sqrt((Math.pow(b, 2)-(4*a*c))))/(2*a)) + "\nX2 = " + (((-1*b)-Math.sqrt((Math.pow(b, 2)-(4*a*c))))/(2*a)));
        
        entrada.close();
    }

}
