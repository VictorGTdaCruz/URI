import java.util.Scanner;


public class Main {
	public static void main(String[] args) {
				
		//seleciona o numero de frases da entrada
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.nextLine();
		
		//
		for(int i = 0; i < n; i++){
		
			String frase = scanner.nextLine();
			int mid = frase.length()/2 ;
			
			//separa a frase em duas
			String[] partes = {
					frase.substring(0, mid)
					,frase.substring(mid)
					};
			
			//inverte as duas metades
			partes[0] = new StringBuilder(partes[0]).reverse().toString();
			partes[1] = new StringBuilder(partes[1]).reverse().toString();

			System.out.println(partes[0] + partes[1]);
		
		}
		
		
	}
}