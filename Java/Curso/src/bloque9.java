import java.util.Scanner;

class ejercicio1 {
    //atibutos
    private float L1,L2;

    //constructor
    public ejercicio1() {
        this.L1 = 0;
        this.L2 = 0;
    }

    public ejercicio1(float L1, float L2) {
        this.L1= L1;
        this.L2=L2;
    }

    public ejercicio1(float L1) {
        this.L1= L1;
        this.L2=L1;
    }

    //metodos
    public static void main() {
        
        String[] labels = {"L1: ", "L2: "};
        String[] response = new String[2];
        ejercicio1 cuadrilatero = new ejercicio1();

        response = metodos.MultiInput(labels, "Ejercicio 1 POO");

        if (Float.parseFloat(response[0]) == Float.parseFloat(response[1])) {
            cuadrilatero=new ejercicio1(Float.parseFloat(response[0]));   
        }else{
            cuadrilatero=new ejercicio1(Float.parseFloat(response[0]), Float.parseFloat(response[1]));
        }

        System.out.println("Area: " + cuadrilatero.getArea());
        System.out.println("Perimetro: " + cuadrilatero.getParam());

    }

    public float getArea() {
        return this.L1*this.L2;
    }
    public float getParam() {
        return (this.L1*2)+(this.L2*2);
    }
}

class ejercicio2 {

    private int x;
    private int y;

    public ejercicio2(){
        this.x=1;
        this.y=1;
    }

    public static void main() {

        Scanner entrada = new Scanner(System.in);
        String input = "";
        ejercicio2 player = new ejercicio2();
        boolean flag=true;

        while (flag) {
            metodos.limpiaPantalla();
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 7; j++) {
                    if (i==player.getX() && j==player.getY()) {
                        System.out.print("1 ");
                    }else{
                        System.out.print("0 ");
                    }
                }
                System.out.println();
            }

            System.out.println("W. Arriba\nS. Abajo\nA. Izquierda\nD. Derecha");

            input = entrada.nextLine();

            if (input.equals("w") || input.equals("W")) {
                player.moverArriba();
            } if (input.equals("s") || input.equals("S")) {
                player.moverAbajo();
            } if (input.equals("a") || input.equals("A")) {
                player.moverIzquierda();
            } if (input.equals("d") || input.equals("D")) {
                player.moverDerecha();
            }

            if (player.getX() < 0 || player.getY() < 0 || player.getX() > 6 || player.getY() > 6) {
                metodos.limpiaPantalla();
                System.out.println("Game Over");
                flag=false;
            }

            
        }

        entrada.close();
        
    }

    public void moverDerecha() {
        this.y+=1;
    }

    public void moverIzquierda() {
        this.y-=1;
    }

    public void moverArriba() {
        this.x-=1;
    }

    public void moverAbajo() {
        this.x+=1;
    }

    public int getX() {
        return this.x;
    }

    public int getY() {
        return this.y;
    }
    
}

class ejercicio4 {
    static int  cod =0;
    static String name = "";
    static float time = 0.0f;

    public ejercicio4(int codigo,String nmbre, float tiempo) {
        if (tiempo < time || time == 0.0) {
            cod = codigo;
            name = nmbre;
            time = tiempo;
        }
    }

    public String getString() {
        return "El ganador es:\nCodigo: " + cod + "\nNombre: " + name + "\nTiempo: " + time;
    }
}

class ejercicio5 {
    double base;
    double lado;
    double area;
    static double maxArea;
    static double maxL;
    static double maxB;
    static int maxCod;

    public ejercicio5(double b, double a,int index) {
        this.base = b;
        this.lado = a;
        this.area = (b*Math.sqrt((a*a) - ((b*b)/4)))/2;
        if (this.area > maxArea) {
            maxArea=this.area;
            maxL = a;
            maxB = b;
            maxCod = index;
        }
    }

    public String getMaxArea() {
        return "Triangulo  " + maxCod +" con maxima area\n" + "Lados: " + maxL + "\nBase:" + maxB + "\nArea: " + maxArea;
    }
    
}

class ejercicio7 {
    private String name;
    private cuentas[] cuentasV;

    public ejercicio7(String name, int cuenta){
        this.name = name;
        this.cuentasV[0] = new cuentas(cuenta);
    }
    public ejercicio7(int cuenta){
        this.cuentasV[cuentasV.length] = new cuentas(cuenta);
    }

    public void ingresar(float a, int cuenta) {
        this.cuentasV[cuenta].ingresar(a);
    }

}

class cuentas{
    private int cuenta;
    private float balance;

    public cuentas(int nCuenta){
        this.cuenta = nCuenta;
        this.balance = 0.0f;
    }

    public void ingresar(float a) {
        this.balance += a;
    }

    
}

public class bloque9 {
    public static void main() {
        ejercicio7a();
    }

    public static void ejercicio4a() {
        ejercicio4 par[] = new ejercicio4[3];
        String[] labels = {"Codigo: ", "Nombre: ", "Tiempo: "};
        String[] respose = new String[3];
        for (int i = 0; i < par.length; i++) {
            respose = metodos.MultiInput(labels, "Jugador " + (i+1));
            par[i] = new ejercicio4(Integer.parseInt(respose[0]), respose[1], Float.parseFloat(respose[2]));
        }
        System.out.println(par[2].getString());
    }

    public static void ejercicio5a() {
        ejercicio5 triangulos[] = new ejercicio5[3];
        String[] labels = {"Lado: ", "Base: "};
        String[] respose = new String[3];
        for (int i = 0; i < triangulos.length; i++) {
            respose = metodos.MultiInput(labels, "Triangulo " + (i+1));
            triangulos[i] = new ejercicio5(Double.parseDouble(respose[0]), Double.parseDouble(respose[1]), i);
        }
        System.out.println(triangulos[2].getMaxArea());
    }

    public static void ejercicio7a() {
        progressBar pb = new progressBar("Test", 100);
        for (int i = 0; i <= 110; i++) {
            pb.print();
            pb.step();
            pb.sleep(100);
        }
        System.out.println();

        System.out.print("Hola mundo");
        System.out.print("\rHOLA");
    }



}
