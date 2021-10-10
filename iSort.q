isort:{[A]
  n:count A;
  i:1;
  while[i<n; 
    [j:i-1; 
    k:A[i]; 
    while[(j>0) & A[j]>k;A[j+1]:A[j];j:j-1]; 
    A[j+1]:k;
	];
	i:i+1];
  :`s#A;
 }
