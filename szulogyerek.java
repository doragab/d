
	class Szulo {
		public void fuggveny() {
			System.out.println("szulo");
		};
	}

	class Gyerek extends Szulo {

		@Override
		public void fuggveny() {
			System.out.println("gyerek");
		}
		public void ujfuggveny() {
			System.out.println("ujfuggveny");
		}

}

public class szulogyerek {

	public static void main(String[] args) {
		Szulo a = new Szulo();
		Gyerek b = new Gyerek();
		Szulo c = new Gyerek();

		a.fuggveny();
		b.fuggveny();
		c.fuggveny();
	} 
}
