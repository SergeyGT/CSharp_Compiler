namespace enums
{
	public enum DayOfWeek
	{
		Monday,   
		Tuesday, 
		Wednesday, 
		Thursday, 
		Friday,    
		Saturday, 
		Sunday     
	}

    public class M
    {
        public static void Main()
        {
           DayOfWeek day = DayOfWeek.Tuesday;
		   if ((int)day == (int)DayOfWeek.Tuesday)
		{
			System.Console.WriteLine("Tuesday");
		}

        }
    }
}