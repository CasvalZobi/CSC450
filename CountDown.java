package Module8PP;

public class CountDown implements Runnable{
	public void run(){
		for(int i = 20; i >= 0; i--)
			System.out.println("Count Down: " + i);
	}
}
