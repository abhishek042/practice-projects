package miniproject;

public class VideoStoreLauncher  {

	public static void main(String[] args) {
		
		vediostore store = new vediostore();
		
		store.addVedio("Vid1");
		store.addVedio("Vid2");
		store.addVedio("Vid3");
		store.receiveRating("Vid1", 4);
		store.receiveRating("Vid2", 2);
		store.receiveRating("Vid3", 3.5);
		store.listInventory();
		store.checkOut("Vid2");
		store.checkOut("Vid2");
		store.returnVedio("Vid1");
		store.checkOut("Vid3");
		store.returnVedio("Vid3");
		
		

	}

}
