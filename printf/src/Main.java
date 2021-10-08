public class Main
{
    public static void main(String[] args) {

        //printf() = an optional method to control, format. and display text to the console window
        //          two arguments = format string + (object/variable/value)
        //          % [flogs] [precision] [width] [conversion-character]


        boolean myBoolean = true;
        char myChar = '#';
        String name = "noje";
        int myInt = 21;
        double myDouble = 1000;

        System.out.printf("boolean %b\n" ,myBoolean);
        System.out.printf("char %c\n" ,myChar);
        System.out.printf("string %s \n",name);
        System.out.printf("double %f \n",myDouble);





        //[width]
        //minimum number of characters to be written as output
        //System.out.printf("hello %10s", name);//adauga spatiu liber (10) inainte de nume


        //[precision]
        //sets number of digits of precision when outputting foating-point values
        //System.out.printf("you have this much money %.2f", myDouble);//precizam cate cifre sa fie dupa .





        //[flags]
        //adds an effect to output based on the flag added to format specifier
        //- : left-justify
        //+ : output a plus ( + ) or minus ( - ) sign for a numeric value
        //0 : numeric values are zero-padded
        //, : comma grouping separator if number > 1000






    }
}
