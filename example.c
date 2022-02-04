
int main(){
    int a = 0;
    /*ASSERT [| EX (x:Z)(y:ptr)(z:Z) ,
                PROP{} 
                LOCAL{Temp 1 (AbsVar z) tint, Temp 2 (AbsVar y) tptr} 
                SEP{Mapsto (AbsVar x) tint (AbsVar y) * Emp}
             |] 
    END*/
    /*GIVEN [| x |] END*/
    /*GIVEN [| z |] END*/
    /*GIVEN [| y |] END*/
    a = a + 1;
    a = a + 1;
    /*ASSERT [| PROP{} 
                LOCAL{Temp 1 (AbsVar x) tint, Temp 2 (AbsVar y) tint} 
                SEP{Mapsto (AbsVar x) tint (AbsVar y) * Emp}
             |] 
    END*/
    a = a + 1;
    /*ASSERT [| PROP{} 
                LOCAL{Temp 1 (AbsVar x) tint, Temp 2 (AbsVar y) tint} 
                SEP{Mapsto (AbsVar x) tint (AbsVar y) * Emp}
             |] 
    END*/
    a = a + 1;
    /*ASSERT [| PROP{} 
                LOCAL{Temp 1 (AbsVar x) tint, Temp 2 (AbsVar y) tint} 
                SEP{Mapsto (AbsVar x) tint (AbsVar y) * Emp}
             |] 
    END*/
    return 0;
}