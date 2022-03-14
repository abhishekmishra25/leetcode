import java.util.*;
import java.io.*;

public class hashcode 
{
    static fastreaderrr sc=new fastreaderrr();
    public static void main(String args[])
    {
        int c=sc.I(),n=sc.I();
        int seat[]=new int[c];
        int fill[]=new int[c];
        for(int i=0;i<c;i++){
            seat[i]=sc.I();
        }
        student st[]=new student[n];
        for(int i=0;i<n;i++){
            String S[]=sc.S().trim().split(",");
            String fuck[]=S[0].split("-");
            String ss1[]=S[2].split("-");
            String ss2[]=S[3].split("-");
            String ss3[]=S[4].split("-");
            st[i]=new student(Integer.parseInt(fuck[1]),Double.parseDouble(S[1]),Integer.parseInt(ss1[1]),Integer.parseInt(ss2[1]),Integer.parseInt(ss3[1]));
        }
        Arrays.sort(st,new my_Comp());
        ArrayList<std> ans=new ArrayList<>();
        for(int i=0;i<n;i++){
            student ST=st[i];
            if(fill[ST.s1-1]<seat[ST.s1-1]){
                ans.add(new std("Student-"+ST.name,"C-"+ST.s1,ST.percentage));
                fill[ST.s1-1]++;
            }else if(fill[ST.s2-1]<seat[ST.s2-1]){
                ans.add(new std("Student-"+ST.name,"C-"+ST.s2,ST.percentage));
                fill[ST.s2-1]++;
            }else if(fill[ST.s3-1]<seat[ST.s3-1]){
                ans.add(new std("Student-"+ST.name,"C-"+ST.s3,ST.percentage));
                fill[ST.s3-1]++;
            }
        }
        Collections.sort(ans,new my_Comp1());
        for(int i=0;i<ans.size();i++){
            System.out.println(ans.get(i).s1+" "+ans.get(i).s2);
        }
    }
    public static class std
    {
        String s1,s2;
        double per;
        public std(String s1,String s2,double per)
        {
            this.s1=s1;
            this.s2=s2;
            this.per=per;
        }
    }
    public static class my_Comp1 implements Comparator<std>
    {
        public int compare(std s1,std s2)
        {
            if(s1.per>s2.per){
                return -1;
            }else if(s1.per<s2.per){
                return 1;
            }else{
                return 0;
            }
        }
    } 
    public static class student
    {
        int name;
        double percentage;
        int s1,s2,s3;
        public student(int n,double p,int ss1,int ss2,int ss3)
        {
            name=n;
            percentage=p;
            s1=ss1;
            s2=ss2;
            s3=ss3;
        }
    }
    public static class my_Comp implements Comparator<student>
    {
        public int compare(student s1,student s2)
        {
            if(s1.percentage>s2.percentage){
                return -1;
            }else if(s1.percentage<s2.percentage){
                return 1;
            }else{
                if(s1.name<s2.name)return -1;
                else return 1;
            }
        }
    } 
}
class fastreaderrr {  
    BufferedReader br;
    StringTokenizer st;
    public fastreaderrr(){
        br = new BufferedReader(new InputStreamReader(System.in));
    }
    String next(){
        while (st == null || !st.hasMoreElements()){
            try {
                st = new StringTokenizer(br.readLine());
            }
            catch (IOException e){
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }
    int I(){ return Integer.parseInt(next());}
    long L(){ return Long.parseLong(next());}
    double D(){return Double.parseDouble(next());}
    String S(){
        String str = "";
        try {
            str = br.readLine();
        }
        catch (IOException e){
            e.printStackTrace();
        }
        return str;
    }
}