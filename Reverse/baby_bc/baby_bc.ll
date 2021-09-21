@bytes_114514 = global [256 x i8] c"@BdxRTbRBbjIVf`PEyqe^\5C^\5C|cc|JRubaGLytHeRI@jgNegHU[Myy]==\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00", align 16
@main.key = private unnamed_addr constant [256 x i8] c"\11E\14avalon,yyds\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00\00", align 16
@.str = private unnamed_addr constant [23 x i8] c"<---  moectf2021  --->\00", align 1
@.str.1 = private unnamed_addr constant [34 x i8] c" [baby_bc] Welcome to moectf2021.\00", align 1
@.str.2 = private unnamed_addr constant [18 x i8] c"input your flag: \00", align 1
@.str.3 = private unnamed_addr constant [5 x i8] c"%99s\00", align 1
@.str.4 = private unnamed_addr constant [14 x i8] c"Wrong length!\00", align 1
@.str.5 = private unnamed_addr constant [20 x i8] c"rua! you are wrong!\00", align 1
@.str.6 = private unnamed_addr constant [19 x i8] c"Congratulations!!!\00", align 1

; Function Attrs: noinline nounwind optnone uwtable
define i32 @func_114514(i32*, i8*, i32) #0 {
  %4 = alloca i32, align 4
  %5 = alloca i32*, align 8
  %6 = alloca i8*, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca [256 x i32], align 16
  %10 = alloca i32, align 4
  %11 = alloca i32, align 4
  %12 = alloca i32, align 4
  store i32* %0, i32** %5, align 8
  store i8* %1, i8** %6, align 8
  store i32 %2, i32* %7, align 4
  store i32 0, i32* %8, align 4
  %13 = bitcast [256 x i32]* %9 to i8*
  call void @llvm.memset.p0i8.i64(i8* %13, i8 0, i64 1024, i32 16, i1 false)
  store i32 0, i32* %10, align 4
  br label %14

; <label>:14:                                     ; preds = %34, %3
  %15 = load i32, i32* %10, align 4
  %16 = icmp slt i32 %15, 256
  br i1 %16, label %17, label %37

; <label>:17:                                     ; preds = %14
  %18 = load i32, i32* %10, align 4
  %19 = load i32*, i32** %5, align 8
  %20 = load i32, i32* %10, align 4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  store i32 %18, i32* %22, align 4
  %23 = load i8*, i8** %6, align 8
  %24 = load i32, i32* %10, align 4
  %25 = load i32, i32* %7, align 4
  %26 = srem i32 %24, %25
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %23, i64 %27
  %29 = load i8, i8* %28, align 1
  %30 = zext i8 %29 to i32
  %31 = load i32, i32* %10, align 4
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds [256 x i32], [256 x i32]* %9, i64 0, i64 %32
  store i32 %30, i32* %33, align 4
  br label %34

; <label>:34:                                     ; preds = %17
  %35 = load i32, i32* %10, align 4
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %10, align 4
  br label %14

; <label>:37:                                     ; preds = %14
  store i32 0, i32* %11, align 4
  br label %38

; <label>:38:                                     ; preds = %74, %37
  %39 = load i32, i32* %11, align 4
  %40 = icmp slt i32 %39, 256
  br i1 %40, label %41, label %77

; <label>:41:                                     ; preds = %38
  %42 = load i32, i32* %8, align 4
  %43 = load i32*, i32** %5, align 8
  %44 = load i32, i32* %11, align 4
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46, align 4
  %48 = add i32 %42, %47
  %49 = load i32, i32* %11, align 4
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds [256 x i32], [256 x i32]* %9, i64 0, i64 %50
  %52 = load i32, i32* %51, align 4
  %53 = add i32 %48, %52
  %54 = urem i32 %53, 256
  store i32 %54, i32* %8, align 4
  %55 = load i32*, i32** %5, align 8
  %56 = load i32, i32* %11, align 4
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58, align 4
  store i32 %59, i32* %12, align 4
  %60 = load i32*, i32** %5, align 8
  %61 = load i32, i32* %8, align 4
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63, align 4
  %65 = load i32*, i32** %5, align 8
  %66 = load i32, i32* %11, align 4
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68, align 4
  %69 = load i32, i32* %12, align 4
  %70 = load i32*, i32** %5, align 8
  %71 = load i32, i32* %8, align 4
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  store i32 %69, i32* %73, align 4
  br label %74

; <label>:74:                                     ; preds = %41
  %75 = load i32, i32* %11, align 4
  %76 = add nsw i32 %75, 1
  store i32 %76, i32* %11, align 4
  br label %38

; <label>:77:                                     ; preds = %38
  %78 = load i32, i32* %4, align 4
  ret i32 %78
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i32, i1) #1

; Function Attrs: noinline nounwind optnone uwtable
define i32 @func_1919810(i32*, i8*, i32) #0 {
  %4 = alloca i32, align 4
  %5 = alloca i32*, align 8
  %6 = alloca i8*, align 8
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca i32, align 4
  %11 = alloca i8, align 1
  %12 = alloca i32, align 4
  store i32* %0, i32** %5, align 8
  store i8* %1, i8** %6, align 8
  store i32 %2, i32* %7, align 4
  store i32 0, i32* %8, align 4
  store i32 0, i32* %9, align 4
  store i32 0, i32* %10, align 4
  store i32 0, i32* %12, align 4
  br label %13

; <label>:13:                                     ; preds = %75, %3
  %14 = load i32, i32* %12, align 4
  %15 = load i32, i32* %7, align 4
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %17, label %78

; <label>:17:                                     ; preds = %13
  %18 = load i32, i32* %8, align 4
  %19 = add nsw i32 %18, 1
  %20 = srem i32 %19, 256
  store i32 %20, i32* %8, align 4
  %21 = load i32, i32* %9, align 4
  %22 = load i32*, i32** %5, align 8
  %23 = load i32, i32* %8, align 4
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25, align 4
  %27 = add i32 %21, %26
  %28 = urem i32 %27, 256
  store i32 %28, i32* %9, align 4
  %29 = load i32*, i32** %5, align 8
  %30 = load i32, i32* %8, align 4
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32, align 4
  %34 = trunc i32 %33 to i8
  store i8 %34, i8* %11, align 1
  %35 = load i32*, i32** %5, align 8
  %36 = load i32, i32* %9, align 4
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %35, i64 %37
  %39 = load i32, i32* %38, align 4
  %40 = load i32*, i32** %5, align 8
  %41 = load i32, i32* %8, align 4
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  store i32 %39, i32* %43, align 4
  %44 = load i8, i8* %11, align 1
  %45 = zext i8 %44 to i32
  %46 = load i32*, i32** %5, align 8
  %47 = load i32, i32* %9, align 4
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %46, i64 %48
  store i32 %45, i32* %49, align 4
  %50 = load i32*, i32** %5, align 8
  %51 = load i32, i32* %8, align 4
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %50, i64 %52
  %54 = load i32, i32* %53, align 4
  %55 = load i32*, i32** %5, align 8
  %56 = load i32, i32* %9, align 4
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58, align 4
  %60 = add i32 %54, %59
  %61 = urem i32 %60, 256
  store i32 %61, i32* %10, align 4
  %62 = load i32*, i32** %5, align 8
  %63 = load i32, i32* %10, align 4
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  %66 = load i32, i32* %65, align 4
  %67 = load i8*, i8** %6, align 8
  %68 = load i32, i32* %12, align 4
  %69 = sext i32 %68 to i64
  %70 = getelementptr inbounds i8, i8* %67, i64 %69
  %71 = load i8, i8* %70, align 1
  %72 = sext i8 %71 to i32
  %73 = xor i32 %72, %66
  %74 = trunc i32 %73 to i8
  store i8 %74, i8* %70, align 1
  br label %75

; <label>:75:                                     ; preds = %17
  %76 = load i32, i32* %12, align 4
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %12, align 4
  br label %13

; <label>:78:                                     ; preds = %13
  %79 = load i32, i32* %4, align 4
  ret i32 %79
}

; Function Attrs: noinline nounwind optnone uwtable
define i32 @HSencode(i8*, i32, i8*) #0 {
  %4 = alloca i32, align 4
  %5 = alloca i8*, align 8
  %6 = alloca i32, align 4
  %7 = alloca i8*, align 8
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  %10 = alloca i32, align 4
  store i8* %0, i8** %5, align 8
  store i32 %1, i32* %6, align 4
  store i8* %2, i8** %7, align 8
  store i32 0, i32* %9, align 4
  store i32 0, i32* %10, align 4
  %11 = load i32, i32* %6, align 4
  %12 = srem i32 %11, 3
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %18

; <label>:14:                                     ; preds = %3
  %15 = load i32, i32* %6, align 4
  %16 = sdiv i32 %15, 3
  %17 = mul nsw i32 %16, 4
  store i32 %17, i32* %8, align 4
  br label %23

; <label>:18:                                     ; preds = %3
  %19 = load i32, i32* %6, align 4
  %20 = sdiv i32 %19, 3
  %21 = add nsw i32 %20, 1
  %22 = mul nsw i32 %21, 4
  store i32 %22, i32* %8, align 4
  br label %23

; <label>:23:                                     ; preds = %18, %14
  store i32 0, i32* %9, align 4
  store i32 0, i32* %10, align 4
  br label %24

; <label>:24:                                     ; preds = %110, %23
  %25 = load i32, i32* %9, align 4
  %26 = load i32, i32* %8, align 4
  %27 = sub nsw i32 %26, 2
  %28 = icmp slt i32 %25, %27
  br i1 %28, label %29, label %115

; <label>:29:                                     ; preds = %24
  %30 = load i8*, i8** %5, align 8
  %31 = load i32, i32* %10, align 4
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  %34 = load i8, i8* %33, align 1
  %35 = zext i8 %34 to i32
  %36 = ashr i32 %35, 2
  %37 = and i32 %36, 63
  %38 = add nsw i32 %37, 61
  %39 = trunc i32 %38 to i8
  %40 = load i8*, i8** %7, align 8
  %41 = load i32, i32* %9, align 4
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  store i8 %39, i8* %43, align 1
  %44 = load i8*, i8** %5, align 8
  %45 = load i32, i32* %10, align 4
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i8, i8* %44, i64 %46
  %48 = load i8, i8* %47, align 1
  %49 = zext i8 %48 to i32
  %50 = and i32 %49, 3
  %51 = shl i32 %50, 4
  %52 = load i8*, i8** %5, align 8
  %53 = load i32, i32* %10, align 4
  %54 = add nsw i32 %53, 1
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %52, i64 %55
  %57 = load i8, i8* %56, align 1
  %58 = zext i8 %57 to i32
  %59 = ashr i32 %58, 4
  %60 = and i32 %59, 15
  %61 = or i32 %51, %60
  %62 = add nsw i32 %61, 61
  %63 = trunc i32 %62 to i8
  %64 = load i8*, i8** %7, align 8
  %65 = load i32, i32* %9, align 4
  %66 = add nsw i32 %65, 1
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i8, i8* %64, i64 %67
  store i8 %63, i8* %68, align 1
  %69 = load i8*, i8** %5, align 8
  %70 = load i32, i32* %10, align 4
  %71 = add nsw i32 %70, 1
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i8, i8* %69, i64 %72
  %74 = load i8, i8* %73, align 1
  %75 = zext i8 %74 to i32
  %76 = and i32 %75, 15
  %77 = shl i32 %76, 2
  %78 = load i8*, i8** %5, align 8
  %79 = load i32, i32* %10, align 4
  %80 = add nsw i32 %79, 2
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i8, i8* %78, i64 %81
  %83 = load i8, i8* %82, align 1
  %84 = zext i8 %83 to i32
  %85 = ashr i32 %84, 6
  %86 = and i32 %85, 3
  %87 = or i32 %77, %86
  %88 = add nsw i32 %87, 61
  %89 = trunc i32 %88 to i8
  %90 = load i8*, i8** %7, align 8
  %91 = load i32, i32* %9, align 4
  %92 = add nsw i32 %91, 2
  %93 = sext i32 %92 to i64
  %94 = getelementptr inbounds i8, i8* %90, i64 %93
  store i8 %89, i8* %94, align 1
  %95 = load i8*, i8** %5, align 8
  %96 = load i32, i32* %10, align 4
  %97 = add nsw i32 %96, 2
  %98 = sext i32 %97 to i64
  %99 = getelementptr inbounds i8, i8* %95, i64 %98
  %100 = load i8, i8* %99, align 1
  %101 = zext i8 %100 to i32
  %102 = and i32 %101, 63
  %103 = add nsw i32 %102, 61
  %104 = trunc i32 %103 to i8
  %105 = load i8*, i8** %7, align 8
  %106 = load i32, i32* %9, align 4
  %107 = add nsw i32 %106, 3
  %108 = sext i32 %107 to i64
  %109 = getelementptr inbounds i8, i8* %105, i64 %108
  store i8 %104, i8* %109, align 1
  br label %110

; <label>:110:                                    ; preds = %29
  %111 = load i32, i32* %10, align 4
  %112 = add nsw i32 %111, 3
  store i32 %112, i32* %10, align 4
  %113 = load i32, i32* %9, align 4
  %114 = add nsw i32 %113, 4
  store i32 %114, i32* %9, align 4
  br label %24

; <label>:115:                                    ; preds = %24
  %116 = load i32, i32* %6, align 4
  %117 = srem i32 %116, 3
  switch i32 %117, label %130 [
    i32 1, label %118
    i32 2, label %124
  ]

; <label>:118:                                    ; preds = %115
  %119 = load i8*, i8** %7, align 8
  %120 = load i32, i32* %9, align 4
  %121 = sub nsw i32 %120, 2
  %122 = sext i32 %121 to i64
  %123 = getelementptr inbounds i8, i8* %119, i64 %122
  store i8 61, i8* %123, align 1
  br label %124

; <label>:124:                                    ; preds = %115, %118
  %125 = load i8*, i8** %7, align 8
  %126 = load i32, i32* %9, align 4
  %127 = sub nsw i32 %126, 1
  %128 = sext i32 %127 to i64
  %129 = getelementptr inbounds i8, i8* %125, i64 %128
  store i8 61, i8* %129, align 1
  br label %130

; <label>:130:                                    ; preds = %115, %124
  %131 = load i32, i32* %4, align 4
  ret i32 %131
}

; Function Attrs: noinline nounwind optnone uwtable
define i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [256 x i32], align 16
  %3 = alloca [256 x i8], align 16
  %4 = alloca [100 x i8], align 16
  %5 = alloca [512 x i8], align 16
  %6 = alloca i32, align 4
  %7 = alloca i32, align 4
  %8 = alloca i32, align 4
  %9 = alloca i32, align 4
  store i32 0, i32* %1, align 4
  %10 = bitcast [256 x i32]* %2 to i8*
  call void @llvm.memset.p0i8.i64(i8* %10, i8 0, i64 1024, i32 16, i1 false)
  %11 = bitcast [256 x i8]* %3 to i8*
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %11, i8* getelementptr inbounds ([256 x i8], [256 x i8]* @main.key, i32 0, i32 0), i64 256, i32 16, i1 false)
  %12 = bitcast [100 x i8]* %4 to i8*
  call void @llvm.memset.p0i8.i64(i8* %12, i8 0, i64 100, i32 16, i1 false)
  %13 = bitcast [512 x i8]* %5 to i8*
  call void @llvm.memset.p0i8.i64(i8* %13, i8 0, i64 512, i32 16, i1 false)
  %14 = call i32 @puts(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str, i32 0, i32 0))
  %15 = call i32 @puts(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @.str.1, i32 0, i32 0))
  %16 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @.str.2, i32 0, i32 0))
  %17 = getelementptr inbounds [100 x i8], [100 x i8]* %4, i32 0, i32 0
  %18 = call i32 (i8*, ...) @__isoc99_scanf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.3, i32 0, i32 0), i8* %17)
  %19 = getelementptr inbounds [100 x i8], [100 x i8]* %4, i32 0, i32 0
  %20 = call i64 @strlen(i8* %19) #5
  %21 = icmp ne i64 %20, 40
  br i1 %21, label %22, label %24

; <label>:22:                                     ; preds = %0
  %23 = call i32 @puts(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @.str.4, i32 0, i32 0))
  call void @exit(i32 0) #6
  unreachable

; <label>:24:                                     ; preds = %0
  %25 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i32 0, i32 0
  %26 = call i64 @strlen(i8* %25) #5
  %27 = trunc i64 %26 to i32
  store i32 %27, i32* %6, align 4
  %28 = getelementptr inbounds [256 x i32], [256 x i32]* %2, i32 0, i32 0
  %29 = getelementptr inbounds [256 x i8], [256 x i8]* %3, i32 0, i32 0
  %30 = load i32, i32* %6, align 4
  %31 = call i32 @func_114514(i32* %28, i8* %29, i32 %30)
  %32 = getelementptr inbounds [100 x i8], [100 x i8]* %4, i32 0, i32 0
  %33 = call i64 @strlen(i8* %32) #5
  %34 = trunc i64 %33 to i32
  store i32 %34, i32* %7, align 4
  %35 = getelementptr inbounds [256 x i32], [256 x i32]* %2, i32 0, i32 0
  %36 = getelementptr inbounds [100 x i8], [100 x i8]* %4, i32 0, i32 0
  %37 = load i32, i32* %7, align 4
  %38 = call i32 @func_1919810(i32* %35, i8* %36, i32 %37)
  %39 = getelementptr inbounds [100 x i8], [100 x i8]* %4, i32 0, i32 0
  %40 = call i64 @strlen(i8* %39) #5
  %41 = trunc i64 %40 to i32
  store i32 %41, i32* %8, align 4
  %42 = getelementptr inbounds [100 x i8], [100 x i8]* %4, i32 0, i32 0
  %43 = load i32, i32* %8, align 4
  %44 = getelementptr inbounds [512 x i8], [512 x i8]* %5, i32 0, i32 0
  %45 = call i32 @HSencode(i8* %42, i32 %43, i8* %44)
  store i32 0, i32* %9, align 4
  br label %46

; <label>:46:                                     ; preds = %67, %24
  %47 = load i32, i32* %9, align 4
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds [512 x i8], [512 x i8]* %5, i32 0, i32 0
  %50 = call i64 @strlen(i8* %49) #5
  %51 = icmp ult i64 %48, %50
  br i1 %51, label %52, label %70

; <label>:52:                                     ; preds = %46
  %53 = load i32, i32* %9, align 4
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds [512 x i8], [512 x i8]* %5, i64 0, i64 %54
  %56 = load i8, i8* %55, align 1
  %57 = sext i8 %56 to i32
  %58 = load i32, i32* %9, align 4
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds [256 x i8], [256 x i8]* @bytes_114514, i64 0, i64 %59
  %61 = load i8, i8* %60, align 1
  %62 = sext i8 %61 to i32
  %63 = icmp ne i32 %57, %62
  br i1 %63, label %64, label %66

; <label>:64:                                     ; preds = %52
  %65 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @.str.5, i32 0, i32 0))
  call void @exit(i32 0) #6
  unreachable

; <label>:66:                                     ; preds = %52
  br label %67

; <label>:67:                                     ; preds = %66
  %68 = load i32, i32* %9, align 4
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %9, align 4
  br label %46

; <label>:70:                                     ; preds = %46
  %71 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @.str.6, i32 0, i32 0))
  %72 = load i32, i32* %1, align 4
  ret i32 %72
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i32, i1) #1

declare i32 @puts(i8*) #2

declare i32 @__isoc99_scanf(i8*, ...) #2

; Function Attrs: nounwind readonly
declare i64 @strlen(i8*) #3

; Function Attrs: noreturn nounwind
declare void @exit(i32) #4

declare i32 @printf(i8*, ...) #2

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { argmemonly nounwind }
attributes #2 = { "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { nounwind readonly "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { noreturn nounwind "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #5 = { nounwind readonly }
attributes #6 = { noreturn nounwind }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 6.0.0-1ubuntu2 (tags/RELEASE_600/final)"}
