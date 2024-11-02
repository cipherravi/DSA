public class findMax {

    public static void main(String[] args) {

        int[] arr = { 10, 20, 25, 15 };
        display(arr);
        int max = findMaximum(arr);
        System.out.println("Maximum Value :" + max);

    }

    public static void display(int[] arr) {

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");

        }
        System.out.println("");
    }

    public static int findMaximum(int[] arr) {
        int max = arr[0];

        for (int i = 0; i < arr.length; i++) {

            if (arr[i] > max) {

                max = arr[i];
            }
        }
        return max;

    }
}
