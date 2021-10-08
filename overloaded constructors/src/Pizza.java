public class Pizza
{
    String bread;
    String sauce;
    String cheese;
    String topping;

    public Pizza(String bread, String sauce, String topping)
    {
        this.bread = bread;
        this.sauce = sauce;
        this.topping = topping;

    }
    public Pizza(String bread, String sauce,String cheese, String topping)
    {
        this.bread = bread;
        this.sauce = sauce;
        this.topping = topping;
        this.cheese = cheese;

    }
    public Pizza(String bread, String topping)
    {
        this.bread = bread;
        this.topping = topping;

    }
    public Pizza(String bread)
    {
        this.bread = bread;

    }
}
