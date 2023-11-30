package Module8PP;

public class ThreadCountJava {

    public static void main(String[] args) {
        Thread countUpThread = new Thread(new CountUp());
        Thread countDownThread = new Thread(new CountDown());

        try {
        	countUpThread.start();
			countUpThread.join();
			countDownThread.start();
			countDownThread.join();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
    }
}