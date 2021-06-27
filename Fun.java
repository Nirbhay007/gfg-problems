class Sum {

	public static void main(String[] args) {

		Sum s = new Sum();

		s.calc();

	}

	void calc() {

		int[] a = { 3, 4, 5 };

		int[] b = change(a);
		System.out.print(a[0] + a[1] + a[2] + "");
		System.out.println(b[0] + b[1] + b[2]);
	}

	int[] change(int[] arr) {
		arr[1] = 7;
		return arr;

	}

}
