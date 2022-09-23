/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package seleccion;

import java.util.Arrays;
import javax.swing.JOptionPane;

/**
 *
 * @author Mariana
 */
public class Seleccion {

 
    public static void main(String[] args) {
        int[] arreglo = {5,8,13,2,8,0,4,3};
        seleccion(arreglo);
JOptionPane.showMessageDialog(null, Arrays.toString(arreglo));
        
        
    }
    
    private static void seleccion (int[] arreglo){
    for(int i = 0; i<arreglo.length; i++){
    
        int minimo = i;
        for(int j=i+1; j< arreglo.length; j++){
        
        if(arreglo[j] < arreglo[minimo]) {
        minimo = j;
        
        }
        }
    if (i !=minimo){
    int auxiliar = arreglo[i];
    arreglo[i] = arreglo[minimo];
    arreglo[minimo] = auxiliar;
    }
    }
    
    }
    
}
