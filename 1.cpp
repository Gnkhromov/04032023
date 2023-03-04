import java.util.Scanner;


public class Main
{
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Введите число n: ");
		int n = input.nextInt();
		int[][] mass = new int[n][n];
		for(int i=0;i < n;i++){
		    for(int j=0;j<n;j++){
		        mass[i][j] = 6;
		    }
		}
		int t=n-1;
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        if (j<t){
		            mass[i][j]=0;
		        } else if (j>t){
		            mass[i][j]=2;
		        }
		    }
		    mass[i][t]=1;
		    t--;
		}
		
		String viv = "";
		for(int i=0;i<n;i++){
		    for(int j=0;j<n;j++){
		        viv += mass[i][j] + " ";
		    }
		    System.out.println(viv);
		    viv="";
		}
	}
}