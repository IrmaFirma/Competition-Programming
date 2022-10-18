import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


class Result {

    /*
     * Complete the 'filledOrders' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER_ARRAY order
     *  2. INTEGER k
     */

    public static int filledOrders(List<Integer> order, int k) {

            int counter=0;

            Collections.sort(order);

            for(int i:order)

            {

                    if(i<=k)

                    {

                          counter++;

                          k=k-i;

                    }

             }

                return counter;

    }

}
public class Solution {
