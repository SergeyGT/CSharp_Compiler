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

	public enum Months{
		January,
		February
	}

    public class M
    {
        public static void Main()
        {
           DayOfWeek day = DayOfWeek.Tuesday;
		   Months months = Months.January;
		   if ((int)Months.January == (int)DayOfWeek.Monday)
		{
			System.Console.WriteLine("Tuesday");
		}
        }
    }
}