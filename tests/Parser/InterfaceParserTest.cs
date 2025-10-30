namespace TestInterfaces {
    interface IWorker {
        void Work();
        string GetStatus();
    }
    
    interface IReporter {
        void Report(string message);
    }
    
    class Employee : IWorker, IReporter {
        private string name;
        
        public void Work() {
            name = "John";
        }
        
        public string GetStatus() {
            return "Working";
        }
        
        public void Report(string message) {
            string report = "Report: " + message;
        }
    }
}