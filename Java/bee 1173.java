import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StaticList<Integer> list = new StaticList<>(10);

        int n = sc.nextInt();
        list.insertEnd(n);
        for(int i = 0; i < 10; i++) {
            if(i != 0) {
                list.insertEnd( 2 * list.get(i-1));
            }
            System.out.printf("N[%d] = %d\n", i, list.get(i));
        }
    }
}
class StaticList<T> {
    private T[] v;
    private int length;
    private int capacity;

    public StaticList(int capacity) {
        this.capacity = capacity;
        v = (T[]) new Object[capacity];
    }

    public void insertEnd(T element) {
        if(isFull()) {
            throw new ArrayIndexOutOfBoundsException("The list is full");
        }

        v[length] = element;
        length++;
    }

    public void insertStart(T element) {
        if(isFull()) {
            throw new ArrayIndexOutOfBoundsException("The list is full");
        }

        for(int i = length; i > 0; i--) {
            v[i] = v[i-1];
        }

        v[0] = element;
        length++;
    }

    public void insert(int i, T element) {
        if(isFull()) {
            throw new ArrayIndexOutOfBoundsException("The list is full");
        }

        if(i < 0 || i > length) {
            throw new ArrayIndexOutOfBoundsException("Invalid position");
        }

        for(int j = length; j > i; j--) {
            v[j] = v[j-1];
        }

        length++;
        v[i] = element;
    }

    public T removeStart() {
        if(isEmpty()) {
            throw new ArrayIndexOutOfBoundsException("The list is already empty");
        }

        T removedElement = v[0];

        for(int i = 0; i < length; i++) {
            v[i] = v[i+1];
        }

        length--;
        return removedElement;
    }

    public T removeEnd() {
        if(isEmpty()) {
            throw new ArrayIndexOutOfBoundsException("The list is already empty");
        }

        T removedElement = v[length-1];
        length--;
        return removedElement;
    }

    public T remove(int i) {
        if(isEmpty()) {
            throw new ArrayIndexOutOfBoundsException("The list is already empty");
        }

        if(i < 0 || i >= length) {
            throw new ArrayIndexOutOfBoundsException("Invalid position");
        }

        T removedElement = v[i];

        for(int j = i; j < length; j++) {
            v[j] = v[j+1];
        }

        length--;
        return removedElement;
    }

    public T get(int i) {
        return v[i];
    }

    public void set(int i, T element) {
        v[i] = element;
    }

    public boolean isFull() {
        return length >= capacity;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public int size() {
        return length;
    }

    @Override
    public String toString() {
        StringBuilder str = new StringBuilder("[");

        for(int i = 0; i < length-1; i++) {
            str.append(v[i]).append(",");
        }

        str.append(length > 0 ? v[length-1] : "").append("]");

        return str.toString();
    }

    public void clear() {
        v = (T[]) new Object[capacity];
        length = 0;
    }
}
