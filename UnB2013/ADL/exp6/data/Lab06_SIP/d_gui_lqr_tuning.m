% D_GUI_LQR_TUNING
%
% D_GUI_LQR_TUNING creates an input dialog box for interactive LQR controller tuning. 
% In order to tune the LQR controller,
% the user is required to enter values for Q and R, the diagonal weighting matrices.
%
% Nomenclature:
% Q     Diagonal Matrix (semi-positive definite)
% R     Diagonal Matrix (positive definite)
%
% Copyright (C) 2003 Quanser Consulting Inc.
% Quanser Consulting Inc.

function varargout = d_gui_lqr_tuning(varargin)
% D_GUI_LQR_TUNING M-file for d_gui_lqr_tuning.fig
%      D_GUI_LQR_TUNING, by itself, creates a new D_GUI_LQR_TUNING or raises the existing
%      singleton*.
%
%      H = D_GUI_LQR_TUNING returns the handle to a new D_GUI_LQR_TUNING or the handle to
%      the existing singleton*.
%
%      D_GUI_LQR_TUNING('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in D_GUI_LQR_TUNING.M with the given input arguments.
%
%      D_GUI_LQR_TUNING('Property','Value',...) creates a new D_GUI_LQR_TUNING or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before d_gui_lqr_tuning_OpeningFunction gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to d_gui_lqr_tuning_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help d_gui_lqr_tuning

% Last Modified by GUIDE v2.5 25-Jun-2007 09:51:56

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @d_gui_lqr_tuning_OpeningFcn, ...
                   'gui_OutputFcn',  @d_gui_lqr_tuning_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before d_gui_lqr_tuning is made visible.
function d_gui_lqr_tuning_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to d_gui_lqr_tuning (see VARARGIN)

% Set default parameter values
handles.A = [];
handles.B = [];
handles.C = [];
handles.D = [];
handles.fname = [ 'lqr_tuning_logfile' '.txt' ];
handles.R_dim = 1;
handles.Q_dim = 4;
handles.Gui_Trial_ID = 0;

% Parse the arguments
for i=1:2:numel(varargin)
    if strcmp(varargin{i}, 'A')
        handles.A = varargin{i+1};
    end
    if strcmp(varargin{i}, 'B')
        handles.B = varargin{i+1};
    end
    if strcmp(varargin{i}, 'C')
        handles.C = varargin{i+1};
    end
    if strcmp(varargin{i}, 'D')
        handles.D = varargin{i+1};
    end
end

% Choose default command line output for d_gui_lqr_tuning
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes d_gui_lqr_tuning wait for user response (see UIRESUME)
% uiwait(handles.figure_gui);


% --- Outputs from this function are returned to the command line.
function varargout = d_gui_lqr_tuning_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function edit_Q11_Callback(hObject, eventdata, handles)
% hObject    handle to edit_Q11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_Q11 as text
%        str2double(get(hObject,'String')) returns contents of edit_Q11 as a double


% --- Executes during object creation, after setting all properties.
function edit_Q11_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_Q11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_Q22_Callback(hObject, eventdata, handles)
% hObject    handle to edit_Q22 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_Q22 as text
%        str2double(get(hObject,'String')) returns contents of edit_Q22 as a double


% --- Executes during object creation, after setting all properties.
function edit_Q22_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_Q22 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_Q33_Callback(hObject, eventdata, handles)
% hObject    handle to edit_Q33 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_Q33 as text
%        str2double(get(hObject,'String')) returns contents of edit_Q33 as a double


% --- Executes during object creation, after setting all properties.
function edit_Q33_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_Q33 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit_Q44_Callback(hObject, eventdata, handles)
% hObject    handle to edit_Q44 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_Q44 as text
%        str2double(get(hObject,'String')) returns contents of edit_Q44 as a double


% --- Executes during object creation, after setting all properties.
function edit_Q44_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_Q44 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton_Apply.
function pushbutton_Apply_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton_Apply (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% process the user-input data (from the GUI)
% the "ok" button has been pressed
A = handles.A;
B = handles.B;
C = handles.C;
D = handles.D;
fname=handles.fname;
Q_dim=handles.Q_dim;
R_dim=handles.R_dim;
Gui_Trial_ID=handles.Gui_Trial_ID; 
% initializations: only at the first-call
if ( Gui_Trial_ID == 0  )
    fid = fopen( handles.fname, 'a' );
    fprintf( fid, '%% ############## START OF THE LQR TUNING TRIALS ############## \n' );
    fclose( fid );
end 
 Q1(1) = str2double(get(handles.edit_Q11, 'String'));
 Q1(2) = str2double(get(handles.edit_Q22, 'String'));
 Q1(3) = str2double(get(handles.edit_Q33, 'String'));
 Q1(4) = str2double(get(handles.edit_Q44, 'String'));
 R1(1) = str2double(get(handles.edit_R11, 'String'));
 save=get(handles.radiobutton_save, 'value');
 Gui_Trial_ID = Gui_Trial_ID + 1;
 handles.Gui_Trial_ID =Gui_Trial_ID;
 guidata(handles.figure_gui, handles )  % to update the Gui_Trial_ID value everytime the Apply bottun is pressed.
    if (save)
        % save the current trial's Q and R matrices to a text file (for future reference)
        % append the new information to the existing file
        fid = fopen( fname, 'a' );
        fprintf( fid, '%% Trial # %d :\n', Gui_Trial_ID );
        for i = 1 : Q_dim
            fprintf( fid, 'Q(%d,%d) = %.6G; ', i, i, Q1( i ) );
        end
        fprintf( fid, '\n' );
        for i = 1 : R_dim
            fprintf( fid, 'R(%d,%d) = %.6G; ', i, i, R1( i ) );
        end
        fprintf( fid, '\n' );        
        fprintf( '\nTrial # %d : Q & R have been saved to the file "%s".\n', Gui_Trial_ID , fname );
        fclose( fid );
    end
        % convert vectors to diagonal matrices
         Q = diag( Q1 );
         R = diag( R1 );
         fprintf( '\nTrial # %d :\n', Gui_Trial_ID );
        % Calculate the optimal gain vector corresponding to the latest Q
        % and R matrices
        [ K ] = d_ip01_2_sip_lqr( A, B, C, D, Q, R );
        % Display the calculated gains
        disp( ' ' )
        % disp( 'Calculated LQR controller gain elements: ' )
        disp( [ 'K(1) = ' num2str( K(1) ) ' V/m' ] )
        disp( [ 'K(2) = ' num2str( K(2) ) ' V/rad' ] )
        disp( [ 'K(3) = ' num2str( K(3) ) ' V.s/m' ] )
        disp( [ 'K(4) = ' num2str( K(4) ) ' V.s/rad' ] )
        % evaluate K in Matlab workspace
        evalin('base', ['K = [', num2str(K,10), '];'])
        % ask Simulink to update its state (i.e. CTRL+D hotkey )
        qc_update_model


% --- Executes on button press in pushbutton_Cancel.
function pushbutton_Cancel_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton_Cancel (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
disp( 'On-line LQR tuning terminated.' )
% close the gui window
closereq;  


function edit_R11_Callback(hObject, eventdata, handles)
% hObject    handle to edit_R11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit_R11 as text
%        str2double(get(hObject,'String')) returns contents of edit_R11 as a double


% --- Executes during object creation, after setting all properties.
function edit_R11_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit_R11 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in radiobutton_save.
function radiobutton_save_Callback(hObject, eventdata, handles)
% hObject    handle to radiobutton_save (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of radiobutton_save


