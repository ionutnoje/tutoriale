 public class Stiva
    {
        private int array[];
        private int top;
        private int capacity;


        public Stiva(int capacity)
        {
            this.array = new int[capacity];
            this.capacity = capacity;
            this.top = -1;
        }

        public void push(int item)
        {
            if(this.isFull() == true)
            {
                throw new RuntimeException("Stack is full");
            }
            array[top++] = item;
        }

        public int pop()
        {
            if(isEmpty() == true)
            {
                throw new RuntimeException("Stack is empty");
            }
            return array[top--];
        }

        public int peek()
        {
            if(isEmpty() == true)
            {
                throw new RuntimeException("Stack is empty");
            }
            return array[top];
        }

        public boolean isFull()
        {
            if(top == capacity)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public boolean isEmpty()
        {
            if(top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public void print()
        {
            if(this.isEmpty() == true)
            {
                throw new RuntimeException("Stack is empty");
            }
            else
            {
                for(int i = 0; i <= top; i++)
                {
                    System.out.println("Stack["+i+"]= " + array[i]);
                }
            }
        }



    }


