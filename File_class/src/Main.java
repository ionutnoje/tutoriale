import java.io.File;

public class Main
{
    public static void main(String[] args) {

        // file = An abstract representation of file and directory pathnames


        File file = new File("File_class/src/secret_message.txt");
        //File file = new File(C:\\Users\\noje_\\OneDrive\\Desktop\\an2\\tutoriale\\File class\\src\\secret_message.txt);

        if(file.exists())
        {
            System.out.println("that file exists");
            System.out.println(file.getPath());//o sa printeze numele fisierului
            System.out.println(file.getAbsolutePath());//o sa printeze tot path ul pana la fisier
            System.out.println(file.isFile());//returneaza true daca este un fisier
            file.delete();//serge fisierul din proiect

        }
        else
        {
            System.out.println("that file doesn't exists");
        }




    }
}
