clc;
t = 0: 0.001: 1;
fm = 4;
fc = 20;
m = 8;
x = sin(2 * pi * fm * t);
subplot(3,1,1);
plot(x, 'k', 'linewidth', 2);
xlabel("time");
ylabel('amplitude');
title('Input Signal');

y = sin(2 * pi * fc * t);
subplot(3,1,2);
plot(y, 'r', 'linewidth', 2);
xlabel("time");
ylabel('amplitude');
title('Input Carrier');

vfm = sin(2 * pi * fc * t + (m * sin(2 * pi * fm * t)));
subplot(3,1,3);
plot (vfm, 'rgb', 'linewidth', 2);
xlabel("time");
ylabel('amplitude')
title('Modulation Signal');