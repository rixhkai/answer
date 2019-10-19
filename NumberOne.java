import java.util.Scanner;
import java.util.*;

public class NumberOne {

    public static void main(String[] args) {
        String[] str = {"Spiderman", "Avenger", "Superman", "Hulk", "Tony", "Sherlock"};
        
        String smart = "Sherlock";
		String big = "Hulk"
        String some = "BlackWidow"
		
        check(str, smart);
        check(str, big);
		check(str, some);
	}
	
	public static void check(String[] arr, String targetValue) {
        //boolean contains = Arrays.asList(arr).contains(targetValue);
        String cont, cons2;
        cont = " = true";
        cons2 = " = false";
        if (Arrays.asList(arr[0]).contains(targetValue)) {
            
            System.out.println(arr[0] + cont);
        } else {
            System.out.println(arr[0] + cons2);
        }
        if (Arrays.asList(arr[1]).contains(targetValue)){
            System.out.println(arr[1] + cont);
        }else {
            System.out.println(arr[1] + cons2);
        }
        if (Arrays.asList(arr[2]).contains(targetValue)){
            System.out.println(arr[2] + cont);
        }else {
            System.out.println(arr[2] + cons2);
        }
        if (Arrays.asList(arr[3]).contains(targetValue)){
            System.out.println(arr[3] + cont);
        }else {
            System.out.println(arr[3] + cons2);
        }
        if (Arrays.asList(arr[4]).contains(targetValue)){
            System.out.println(arr[4] + cont);
        }else {
            System.out.println(arr[4] + cons2);
        }
        if (Arrays.asList(arr[5]).contains(targetValue)){
            System.out.println(arr[5] + cont);
        }else {
            System.out.println(arr[5] + cons2);
        }
    }
}
