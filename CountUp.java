package Module8PP;

public class CountUp implements Runnable{
	public void run() {
		for(int i = 0; i <= 20; i++)
			System.out.println("Count Up: " + i);
	}
}
