namespace OOP
{
    public class Animal
    {
        public void Walk(){
			System.Console.WriteLine("Animal's walk");
		}
    }
    
    public class Dog : Animal
    { 
        public void Walk(){
			base.Walk();
			System.Console.WriteLine("Dog walk");
		}
    }
    
	public class Cat : Animal
    { 
        public void Walk(){
			System.Console.WriteLine("Cat walk");
		}
    }
	
    public class M
    {
        public static void Main()
        {
            var animal = new OOP.Animal();
            var Dog = new OOP.Dog();
            var Cat = new OOP.Cat();
			
			
			animal.Walk();
			Dog.Walk();
			Cat.Walk();
			
			Animal[] animals = new Animal[3];
			animals[0] = animal;
			animals[1] = Dog;
			animals[2] = Cat;
			System.Console.WriteLine("-----------------");
			for(int i = 0; i < 3; i=i+1){
				animals[i].Walk();
			}
        }
    }
}