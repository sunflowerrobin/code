% Define the input binary data sequence
data = [1, 0, 1, 1, 0, 0, 1];

% Define the time axis
T = length(data);
t = 0:T-1;

% Generate the unipolar NRZ signal
unipolar_nrz = 3*data-1;

% Plot the generated unipolar NRZ signal
plot(t, unipolar_nrz, 'LineWidth', 2);
xlabel('Time (t)');
ylabel('Amplitude (V)');
title('Unipolar NRZ');
grid on;
