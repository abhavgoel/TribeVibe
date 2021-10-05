A = input('enter your matrix: ');
B = input('enter vector');
N = length(A);
[L, U] = lu(sym(A));
L = double(L);
U = double(U);
Y = zeros(N,1);
Y(1) = B(1) / L(1,1);
for k = 2 : N
    Y(k) = (B(k) - L(k,1:k-1)*Y(1:k-1)) / L(k,k);
end

X = zeros(N,1);
X(N) = Y(N)/ U(N,N);
for k = N-1 : -1 : 1 
    X(k) = (Y(k) - U(k,k+1 : N) * X(k+1:N)) / U(k,k);
end

X
