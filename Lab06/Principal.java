/**
 * Classe Principal
 * @author Max do Val Machado
 * @version 3 08/2020
 */
class Principal {
	public static void main(String[] args) {

      //Delcaracao de variaveis
      Geracao algoritmo;
      int n = (args.length < 1) ? 1000 : Integer.parseInt(args[0]);
      double inicio, fim;

      n = 100;
     // n = 1000;
     // n = 10000;
     
      //Inicializacao do algoritmo de ordenacao
     // algoritmo = new QuicksortFirst(n);
      // algoritmo = new QuicksortLast(n);
     //algoritmo = new QuicksortMediana(n);
      algoritmo = new QuicksortRandom(n);
      


      //Geracao do conjunto a ser ordenado
		//algoritmo.aleatorio();
		//algoritmo.crescente();
		//algoritmo.decrescente();


      //Mostrar o conjunto a ser ordenado
		//algoritmo.mostrar();
		

      //Execucao do algoritmo de ordenacao
		inicio = algoritmo.now();
		algoritmo.sort();
		fim = algoritmo.now();


      //Mostrar o conjunto ordenado, tempo de execucao e status da ordenacao
		//algoritmo.mostrar();
		System.out.println("Tempo para ordenar: " + (fim-inicio)/100 + " ms.");
		System.out.println("isOrdenado: " + algoritmo.isOrdenado());
	}
}
