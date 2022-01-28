
int main(){
    int a = 0;
    /*ASSERT [| Ex (x: typ)(y: typ), 
                PROP{};; 
                LOCAL{Temp x tint y};; 
                SEP{ (Data_at c tint d) * (Emp) } 
             |] 
    END*/
    a = a + 1;
    return 0;
    
}