Solved by Kavitha M, IT Dept.

Interface vehicle 

{

  Void getparkarea(string);

}

Public class car implements vehicle

{

   Void getslot(string parkarea)

  {

     If(parkarea==car)

  { 

             System.out.println(“park the car”);

}

Else

{

        System.out.println(“don’t park the car”);

}

}

}

Public class motorbike  implements vehicle

{

   Void getslot(string parkarea)

  {

     If(parkarea==motorbike)

  { 

             System.out.println(“park the bike”);

}

Else

{

        System.out.println(“don’t park the  bike”);

}

}

}

Public class specialcar implements vehicle

{

   Void getslot(string parkarea)

  {

     If((parkarea==car)||(parkarea==specialcar))

  { 

             System.out.println(“park the specialcar”);

}

Else

{

        System.out.println(“don’t park the specialcar”);

}

}

}
