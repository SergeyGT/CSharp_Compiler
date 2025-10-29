class BaseClass {
    public virtual void VirtualMethod() {
        int x = 10;
    }
}

class DerivedClass : BaseClass {
    public override void VirtualMethod() {
        int y = 20;
    }
}