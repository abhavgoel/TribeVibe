a =input("Enter a ");
b=input("Enter b ");
acc=input("Input Accuracy ");
f = @(x) x^3+4*x^2-10;
if(abs(f(a))<=acc)
    c=a;
    disp(a);
elseif(abs(f(b))<=acc)
    c=b;
    disp(b);
elseif(f(a)*f(b)>0)
    disp("Incorect values of a and b");
else
    c1=(a+b)/2;
    c=a;
    n=0;
    while(abs(c1-c)>acc)
       if(f(a)*f(c1)<0)
           b=c1;
       else
           a=c1;
       end;
       c=c1;
       c1=(a+b)/2;
       n=n+1;
    end;
    d=c;
    error=zeros(1,n);
    for(i=1:n)
        d=(a+b)/2;
        error(i)=f(c)-f(d);
        if(f(d)==0)
            break;
        elseif(f(d)*f(a)<0)
            b=d;
        else
            a=d;
        end;
    end;
    disp("Root is");
   disp(c1);
   disp("Number of iterations ");
   disp(n);
   plot(error);
xlabel('x');
ylabel('Error');
title("Absolute Error");
grid on;
end;
