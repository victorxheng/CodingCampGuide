package javaCollections.heapImplementation;

import java.util.ArrayList;

public class MyHeap {
    ArrayList<Integer> backingArray = new ArrayList<>();

    public void add(int element) {
        backingArray.add(element);
        int currentIndex = backingArray.size() - 1;
        while (currentIndex != 0
                && backingArray.get(currentIndex)
                    > backingArray.get((currentIndex - 1) / 2)) {
            int temp = backingArray.get(currentIndex);
            backingArray.set(currentIndex,
                    backingArray.get((currentIndex - 1) / 2));
            backingArray.set((currentIndex - 1) / 2, temp);
        }
    }

    public int getMin() {
        return backingArray.get(0);
    }

    public int removeMin() {
        int temp = backingArray.get(0);
        backingArray.set(0, backingArray.get(backingArray.size() - 1));
        backingArray.remove(backingArray.size() - 1);
        int currentIndex = 0;
        while (currentIndex < backingArray.size()) {
            if (backingArray.get(currentIndex)
                    > backingArray.get(currentIndex * 2 + 1)
                    || backingArray.get(currentIndex)
                    > backingArray.get(currentIndex * 2 + 2)) {
                if (backingArray.get(currentIndex * 2 + 1)
                        < backingArray.get(currentIndex * 2 + 2)) {
                    // swap with left children
                    int temp1 = backingArray.get(currentIndex);
                    backingArray.set(currentIndex, backingArray.get(currentIndex * 2 + 1));
                    backingArray.set(currentIndex * 2 + 1, temp1);
                    currentIndex = currentIndex * 2 + 1;
                } else {
                    // swap with right child
                    int temp1 = backingArray.get(currentIndex);
                    backingArray.set(currentIndex, backingArray.get(currentIndex * 2 + 2));
                    backingArray.set(currentIndex * 2 + 2, temp1);
                    currentIndex = currentIndex * 2 + 2;
                }
            } else {
                break;
            }
        }
        return temp;
    }
}
