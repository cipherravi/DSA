// public class RotateArray {

//     public static void main(String[] args) {

//         int[] arr = { 10, 20, 25, 15 };
//         display(arr);
//         rotate(arr);
//         display(arr);

//     }

//     public static void display(int[] arr) {

//         for (int i = 0; i < arr.length; i++) {
//             System.out.print(arr[i] + " ");

//         }
//         System.out.println("");
//     }

//     public static void rotate(int[] arr) {
//         int k = 2;
//         for (int i = 0; i < k; i++) {
//             int current = arr[i];
//             int next = arr[i + 1];
//             int temp = current;
//             current = next;
//             next = temp;
//         }

//     }

// }

////////////////////////////////////////////////////////

public class RotateArray {

    public static void main(String[] args) {
        int[] arr = { 10, 20, 25, 15 };
        display(arr);
        rotate(arr, -2);
        display(arr);
    }

    public static void display(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void rotate(int[] arr, int k) {
        int n = arr.length;
        k = k % n;
        if (k == 0) {
            return;
        }
        if (k < 0) {
            k = k + n;
        }
        // for (int i = 1; i <= k; i++) {
        // int temp = arr[n - 1];
        // arr[i] = arr[i + 1];
        // arr[0] = temp;
        // }

        // Store the last k elements in a temporary array
        int[] temp = new int[k];
        for (int i = 0; i < k; i++) {
            temp[i] = arr[n - k + i];
        }

        // Shift the rest of the array
        for (int i = n - 1; i >= k; i--) {
            arr[i] = arr[i - k];
        }

        // Place the last k elements back in the beginning
        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
    }

    // ----------------------------------Chat gpt solution

    // public static void rotate(int[] arr, int k) {
    // int n = arr.length;
    // k = k % n; // Handle cases where k is greater than the array length

    // // Create a new array to hold the rotated values
    // int[] rotated = new int[n];

    // // Copy the elements to the new array in rotated positions
    // for (int i = 0; i < n; i++) {
    // rotated[(i + k) % n] = arr[i];
    // }

    // // Copy the rotated array back to the original array
    // for (int i = 0; i < n; i++) {
    // arr[i] = rotated[i];
    // }
    // }

}
