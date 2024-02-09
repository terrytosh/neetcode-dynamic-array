#ifndef DA_H
#define DA_H

class DynamicArray {
    private:
        int *array;
        int capacity;
        int size;

    public:
        // Constructors & Destructor
        DynamicArray();
        DynamicArray(int init_capacity);
        ~DynamicArray();

        // Class Functions
        int get(int i);
        void set(int i, int n);
        void pushback(int n);
        int popback();
        void resize();
        int getSize();
        int getCapacity();
};

#endif /* DA_H */