public class Singleton {
	/*
	 * Para implementarlo de la manera mas basica seria donde hacemos privado el constructor para evitar su creación	 * con new y definimos un metodo que nos devuelve siempre la misma instancia.
	 * */
	private static Singleton instance;
	private Singleton() {
	}

	static Singleton getInstance() {
		if (instance == null) {
			synchronized (Singleton.class) {
				if (instance == null) {
					instance = new Singleton();
				}
			}
		}
		return instance;
	}
}
